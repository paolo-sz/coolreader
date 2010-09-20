// Main Class
package org.coolreader;

import org.coolreader.crengine.Engine;
import org.coolreader.crengine.FileBrowser;
import org.coolreader.crengine.FileInfo;
import org.coolreader.crengine.ReaderView;
import org.coolreader.crengine.Scanner;

import android.app.Activity;
import android.os.Bundle;
import android.os.Environment;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;

public class CoolReader extends Activity
{
	Engine engine;
	ReaderView readerView;
	Scanner scanner;
	FileBrowser browser;
	
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
		Log.i("cr3", "CoolReader.onCreate()");
        super.onCreate(savedInstanceState);
		engine = new Engine(this);
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		this.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, 
               WindowManager.LayoutParams.FLAG_FULLSCREEN );
		readerView = new ReaderView(this, engine);
		scanner = new Scanner(Environment.getExternalStorageDirectory(), "SD");
		browser = new FileBrowser(this, engine, scanner);
		setContentView( readerView );
        engine.showProgress( 5, "Starting Cool Reader..." );
    }

	@Override
	protected void onDestroy() {
		Log.i("cr3", "CoolReader.onDestroy()");
		if ( readerView!=null ) {
			readerView.destroy();
			readerView = null;
		}
		if ( engine!=null ) {
			engine.uninit();
			engine = null;
		}
			
		// TODO Auto-generated method stub
		super.onDestroy();
	}

	@Override
	protected void onPause() {
		Log.i("cr3", "CoolReader.onPause()");
		super.onPause();
	}

	@Override
	protected void onPostCreate(Bundle savedInstanceState) {
		Log.i("cr3", "CoolReader.onPostCreate()");
		super.onPostCreate(savedInstanceState);
	}

	@Override
	protected void onPostResume() {
		Log.i("cr3", "CoolReader.onPostResume()");
		super.onPostResume();
	}

	@Override
	protected void onRestart() {
		Log.i("cr3", "CoolReader.onRestart()");
		super.onRestart();
	}

	@Override
	protected void onRestoreInstanceState(Bundle savedInstanceState) {
		Log.i("cr3", "CoolReader.onRestoreInstanceState()");
		super.onRestoreInstanceState(savedInstanceState);
	}

	@Override
	protected void onResume() {
		Log.i("cr3", "CoolReader.onResume()");
		super.onResume();
	}

	@Override
	protected void onSaveInstanceState(Bundle outState) {
		Log.i("cr3", "CoolReader.onSaveInstanceState()");
		super.onSaveInstanceState(outState);
	}

	static final boolean LOAD_LAST_DOCUMENT_ON_START = false; 
	
	@Override
	protected void onStart() {
		Log.i("cr3", "CoolReader.onStart()");
		super.onStart();
		if ( LOAD_LAST_DOCUMENT_ON_START ) {
			readerView.loadLastDocument(new Runnable() {
				public void run() {
					// cannot open recent book: load another one
					Log.e("cr3", "Cannot open last document, starting file browser");
					showBrowser();
				}
			});
		} else {
			showBrowser();
		}
	}

	@Override
	protected void onStop() {
		readerView.close();
		super.onStop();
	}
	
	public void loadDocument( FileInfo item )
	{
		setContentView(readerView);
		readerView.loadDocument(item.getPathName());
	}
	
	public void showBrowser()
	{
		setContentView(browser);
		browser.start();
	}
	
}