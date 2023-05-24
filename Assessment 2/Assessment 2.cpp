//chamaka amarasinghe G21017399
// Assessment 2.cpp: A program using the TL-Engine
// TL-Engine include file and namespace
#include <TL-Engine.h>
#include<sstream>
using namespace tle;

void main()
{
	// Create a 3D engine (using TLX engine here) and open a window for it
	I3DEngine* myEngine = New3DEngine(kTLX);
	myEngine->StartWindowed();

	// Add default folder for meshes and other media
	myEngine->AddMediaFolder("C:\\ProgramData\\TL-Engine\\Media");

	/**** Set up your scene here ****/

	//creating the checkpoint model and assigning an array to store the models  
	IMesh* CheckpointMesh;
	IModel* CheckpointModel[7];

	//creating the isle model and assigning an array to store the models  
	IMesh* IsleStraightMesh;
	IModel* IsleStraightModel[6];

	//creating the wall model and assigning an array to store the models  
	IMesh* WallMesh;
	IModel* WallModel[3];

	//creating the skybox model 
	IMesh* skyboxMesh;
	IModel* skyboxModel;

	//creating the hovercar model 
	IMesh* hovercarMesh;
	IModel* hovercarModel;

	//creating the ground model  
	IMesh* groundMesh;
	IModel* groundModel;

	//creating the watertank model 
	IMesh* watertankMesh;
	IModel* watertankModel[4];


	//creating and setting position of the model 
	watertankMesh = myEngine->LoadMesh("TankSmall1.x");
	watertankModel[0] = watertankMesh->CreateModel();
	watertankModel[0]->SetLocalPosition(-40, 0, 56);
	watertankModel[0]->RotateLocalY(60);


	//creating and setting position of the model 
	watertankMesh = myEngine->LoadMesh("TankSmall1.x");
	watertankModel[1] = watertankMesh->CreateModel();
	watertankModel[1]->SetLocalPosition(-45, 0, 100);
	watertankModel[1]->RotateLocalY(60);

	//creating and setting position of the model 
	watertankMesh = myEngine->LoadMesh("TankSmall1.x");
	watertankModel[2] = watertankMesh->CreateModel();
	watertankModel[2]->SetLocalPosition(-45, 0, 120);
	watertankModel[2]->RotateLocalY(60);

    
	//creating and setting position of the model 
    CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[0] = CheckpointMesh->CreateModel();
	CheckpointModel[0]->SetLocalPosition(0, 0, 0);

	//creating and setting position of the model 
	CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[1] = CheckpointMesh->CreateModel();
	CheckpointModel[1]->SetLocalPosition(0, 0, 150);
	CheckpointModel[1]->RotateLocalY(90);

	//creating and setting position of the model 
	CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[6] = CheckpointMesh->CreateModel();
	CheckpointModel[6]->SetLocalPosition(-20, 0, 150);
	CheckpointModel[6]->RotateLocalY(90);

	//creating and setting position of the model 
	CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[2] = CheckpointMesh->CreateModel();
	CheckpointModel[2]->SetLocalPosition(-25, 0, 56);

	//creating and setting position of the model 
	CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[3] = CheckpointMesh->CreateModel();
	CheckpointModel[3]->SetLocalPosition(-30, 0, 100);


	//creating and setting position of the model 
	CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[4] = CheckpointMesh->CreateModel();
	CheckpointModel[4]->SetLocalPosition(-30, 0, 120);

	//creating and setting position of the model 
	CheckpointMesh = myEngine->LoadMesh("Checkpoint.x");
	CheckpointModel[5] = CheckpointMesh->CreateModel();
	CheckpointModel[5]->SetLocalPosition(-30, 0, 120);


	//creating and setting position of the model 
	IsleStraightMesh = myEngine->LoadMesh("IsleStraight.x");
	IsleStraightModel[0] = IsleStraightMesh->CreateModel();
	IsleStraightModel[0]->SetLocalPosition(-10, 0, 40);

	//creating and setting position of the model 
	IsleStraightMesh = myEngine->LoadMesh("IsleStraight.x");
	IsleStraightModel[1] = IsleStraightMesh->CreateModel();
	IsleStraightModel[1]->SetLocalPosition(30, 0, 40);

	//creating and setting position of the model 
	IsleStraightMesh = myEngine->LoadMesh("IsleStraight.x");
	IsleStraightModel[2] = IsleStraightMesh->CreateModel();
	IsleStraightModel[2]->SetLocalPosition(-10, 0, 56);

	//creating and setting position of the model 
	IsleStraightMesh = myEngine->LoadMesh("IsleStraight.x");
	IsleStraightModel[3] = IsleStraightMesh->CreateModel();
	IsleStraightModel[3]->SetLocalPosition(10, 0, 56);

	//creating and setting position of the model 
	IsleStraightMesh = myEngine->LoadMesh("IsleStraight.x");
	IsleStraightModel[4] = IsleStraightMesh->CreateModel();
	IsleStraightModel[4]->SetLocalPosition(-8, 0, 130);
	IsleStraightModel[4]->RotateLocalY(90);

	//creating and setting position of the model 
    IsleStraightMesh = myEngine->LoadMesh("IsleStraight.x");
	IsleStraightModel[5] = IsleStraightMesh->CreateModel();
	IsleStraightModel[5]->SetLocalPosition(8, 0, 130);
	IsleStraightModel[5]->RotateLocalY(90);

	//creating and setting position of the model 
	WallMesh = myEngine->LoadMesh("Wall.x");
	WallModel[0] = WallMesh->CreateModel();
	WallModel[0]->SetLocalPosition(-10, 0, 48);

	//creating and setting position of the model 
	WallMesh = myEngine->LoadMesh("Wall.x");
	WallModel[1] = WallMesh->CreateModel();
	WallModel[1]->SetLocalPosition(10, 0, 48);

	//creating and setting position of the model 
	WallMesh = myEngine->LoadMesh("Wall.x");
	WallModel[2] = WallMesh->CreateModel();
	WallModel[2]->SetLocalPosition(0, 0, 130);
	WallModel[2]->RotateLocalY(90);

	//creating and setting position of the model
	skyboxMesh = myEngine->LoadMesh("Skybox 07.x");
	skyboxModel = skyboxMesh->CreateModel();
	skyboxModel->SetLocalPosition(0, -960, 0);

	//creating and setting position of the model 
    hovercarMesh = myEngine->LoadMesh("hovercar.x");
	hovercarModel = hovercarMesh->CreateModel();
	hovercarModel->SetLocalPosition(-0, 0, -20);

	//creating and setting position of the model 
    groundMesh = myEngine->LoadMesh("ground.x");
	groundModel = groundMesh->CreateModel();
	groundModel->SetLocalPosition(-0, 0, 0);


	bool timer1 = true;//assigning a bool to setup the timer 
	bool paused = true;//assigning a bool to setup the pause state
	//assigning bool values to set up the starting count down
	bool value = true; 
	bool value2 = false;
	bool value3 = false;
	bool value4 = false;
	bool value5 = false;
	bool collision1 = false;
	bool collision2 = false;
	bool collision3 = false;
	bool collision4 = false;
	bool collision5 = false;
	bool collision6 = false;
	bool collision7 = false;
	bool collision8 = false;
	//bool collision6 = false;

	float hovercarSpeed = 0.25;//a variable to store the speed of the hovercar 
	float cameraSpeed = 0.5;//variable to store the camera movement speed 
	float frameTime;//variable to store the time 
	//assigning bool values to set up the starting count down
	float timeA = 0;
	float timeB = 0;
	float timeC = 0;
	float timeD = 0;
	float health = 100;
	float damage = 0;

	//setting up the game camera 
	ICamera* gameCamera;
	gameCamera = myEngine->CreateCamera(kManual);
	gameCamera->AttachToParent(hovercarModel);

	//inserting text font to the  game 
	IFont* myFont = myEngine->LoadFont("Monotype corsiva", 56);

	//inserting backdrop image 
	ISprite* backdrop = myEngine->CreateSprite("uiBackdrop5.jpg", 5, 650);
	


	// The main game loop, repeat until engine is stopped
	while (myEngine->IsRunning())
	{
		// Draw the scene
		myEngine->DrawScene();

		/**** Update your scene each frame here ****/
		for (float delay = 0; delay < 1000000; delay++) {

		}

		// assigning when key escape is hit the engine should stop 
		if (myEngine->KeyHit(Key_Escape)) {

			myEngine->Stop();

		}

		//displaying a message at the start 
		stringstream gameplaystate;
		gameplaystate << " Hit Space To Start" << endl;
		myFont->Draw(gameplaystate.str(), 5, 655, kBlack);
		gameplaystate.str("");
		frameTime = myEngine->Timer();

		
		//condition used to start the game play 
		if ( myEngine->KeyHit(Key_Space)) {

			

			paused = false;


		}

		//condition used to allow the object to move after space is hit 
		if (paused == false) {

			//setting up the starting count down 
			if (value == true && timeA < 0.002) {

				stringstream stateA;
				myEngine->Timer();
				stateA << " ONE " << endl;
				myFont->Draw(stateA.str(), 500, 655, kBlack);
				frameTime = myEngine->Timer();
				timeA = timeA + frameTime;

			}

			if (timeA > 0.002) {

				value = false;
				value2 = true;
			}

			//setting up the starting count down
			if (value2 == true && timeB < 0.002) {

				stringstream stateB;
				myEngine->Timer();
				stateB << " TWO " << endl;
				myFont->Draw(stateB.str(), 500, 655, kBlack);
				frameTime = myEngine->Timer();
				timeB = timeB + frameTime;

			}

			if (timeB > 0.002) {

				value = false;

				value2 = false;

				value3 = true;
			}

			//setting up the starting count down
			if (value3 == true && timeC < 0.002) {


				stringstream stateC;
				myEngine->Timer();
				stateC << " THREE " << endl;
				myFont->Draw(stateC.str(), 500, 655, kBlack);
				frameTime = myEngine->Timer();
				timeC = timeC + frameTime;

			}

			if (timeC > 0.002) {

				value = false;

				value2 = false;

				value3 = false;

				value5 = true;

			}

			//setting up to display go 
			if (value5 == true && timeD < 0.002) {

				stringstream stateD;
				myEngine->Timer();
				stateD << " GO " << endl;
				myFont->Draw(stateD.str(), 500, 655, kBlack);
				frameTime = myEngine->Timer();
				timeD = timeD + frameTime;

			}

			if (timeD > 0.005) {

				value = false;

				value2 = false;

				value3 = false;

				value5 = false;

			}



			//assigning when key W is held hover car should move
			if (myEngine->KeyHeld(Key_W)) {

				hovercarModel->MoveLocalZ(hovercarSpeed);

			}

			//assigning when key S is held hover car should move
			if (myEngine->KeyHeld(Key_S)) {

				hovercarModel->MoveLocalZ(-hovercarSpeed);

			}

			//assigning when key D is held hover car should move
			if (myEngine->KeyHeld(Key_D)) {

				hovercarModel->RotateLocalY(hovercarSpeed);

			}

			//assigning when key A is held hover car should move
			if (myEngine->KeyHeld(Key_A)) {

				hovercarModel->RotateLocalY(-hovercarSpeed);

			}

			//assigning when up arrow key is held move the camera
			if (myEngine->KeyHeld(Key_Up)) {

				gameCamera->MoveY(cameraSpeed);

			}

			//assigning when down arrow key is held move the camera
			if (myEngine->KeyHeld(Key_Down)) {

				gameCamera->MoveZ(-cameraSpeed);

			}

			//assigning when right arrow key is held move the camera
			if (myEngine->KeyHeld(Key_Right)) {

				gameCamera->MoveX(cameraSpeed);

			}

			//assigning when left arrow key is held move the camera
			if (myEngine->KeyHeld(Key_Left)) {

				gameCamera->MoveX(-cameraSpeed);

			}

		}
			
         //allowing the mouse to move 
		int mouseMoveX = myEngine->GetMouseMovementX();


		//reseting the camera position 
		if (myEngine->KeyHit(Key_1)) {


			ICamera* gameCamera;
			gameCamera = myEngine->CreateCamera(kManual);
			gameCamera->AttachToParent(hovercarModel);

			int mouseMoveX = myEngine->GetMouseMovementX();
			gameCamera->RotateY(mouseMoveX * 0.1);


		}

		//used to get the location of the hover car 
		int x;
		int y;
		int z;

		//used to get the location to complete a stage 
		x = hovercarModel->GetX() - CheckpointModel[2]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - CheckpointModel[2]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - CheckpointModel[2]->GetZ();
		z = z * z;

		//condition used to display the stage 
		if (sqrt(x + y + z) < 10 && collision1 == false) {

			stringstream stateE;
			myEngine->Timer();
			stateE << " Stage 1 complete " << endl;
			myFont->Draw(stateE.str(), 500, 655, kBlack);
			frameTime = myEngine->Timer();
		    
		}

		//used to get the location to complete a stage
		x = hovercarModel->GetX() - CheckpointModel[1]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - CheckpointModel[1]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - CheckpointModel[1]->GetZ();
		z = z * z;

		//condition used to display the stage
		if (sqrt(x + y + z) < 10 && collision2 == false) {

			stringstream stateF;
			myEngine->Timer();
			stateF << "Race complete  " << endl;
			myFont->Draw(stateF.str(), 500, 655, kBlack);
			frameTime = myEngine->Timer();

		}

		//used to get the location to complete a stage
		x = hovercarModel->GetX() - CheckpointModel[3]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - CheckpointModel[3]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - CheckpointModel[3]->GetZ();
		z = z * z;

		//condition used to display the stage
		if (sqrt(x + y + z) < 10 && collision3 == false) {

			stringstream stateG;
			myEngine->Timer();
			stateG << " stage 2 complete  " << endl;
			myFont->Draw(stateG.str(), 500, 655, kBlack);
			frameTime = myEngine->Timer();
        
		}

		//used to get the location to complete a stage
		x = hovercarModel->GetX() - CheckpointModel[4]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - CheckpointModel[4]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - CheckpointModel[4]->GetZ();
		z = z * z;

		//condition used to display the stage
		if (sqrt(x + y + z) < 10 && collision7 == false) {

			stringstream stateG;
			myEngine->Timer();
			stateG << " stage 3 complete  " << endl;
			myFont->Draw(stateG.str(), 500, 655, kBlack);
			frameTime = myEngine->Timer();

		}

		//used to get the location to complete a stage
		x = hovercarModel->GetX() - CheckpointModel[6]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - CheckpointModel[6]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - CheckpointModel[6]->GetZ();
		z = z * z;

		//condition used to display the stage
		if (sqrt(x + y + z) < 10 && collision8 == false) {

			stringstream stateK;
			myEngine->Timer();
			stateK << " stage 4 complete  " << endl;
			myFont->Draw(stateK.str(), 500, 655, kBlack);
			frameTime = myEngine->Timer();

		}

		//used to get the location to detect the wall model 
		x = hovercarModel->GetX() - WallModel[0]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - WallModel[0]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - WallModel[0]->GetZ();
		z = z * z;

		if (sqrt(x + y + z) < 10 && collision4 == false) {

			damage = health - 20;
			stringstream damageVal;
			myEngine->Timer();
			damageVal << damage << endl;
			myFont->Draw(damageVal.str(), 1200, 40, kRed);
			frameTime = myEngine->Timer();

		}

		//used to get the location to detect the wall model 
		x = hovercarModel->GetX() - WallModel[1]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - WallModel[1]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - WallModel[1]->GetZ();
		z = z * z;

		if (sqrt(x + y + z) < 10 && collision5 == false) {

			float damage1;
			damage1 = damage - 20;
			stringstream damageVal1;
			myEngine->Timer();
			damageVal1 << damage << endl;
			myFont->Draw(damageVal1.str(), 1200, 40, kRed);
			frameTime = myEngine->Timer();

        }

		//used to get the location to detect the wall model 
		x = hovercarModel->GetX() - WallModel[2]->GetX();
		x = x * x;
		y = hovercarModel->GetY() - WallModel[2]->GetY();
		y = y * y;
		z = hovercarModel->GetZ() - WallModel[2]->GetZ();
		z = z * z;

		if (sqrt(x + y + z) < 10 && collision6 == false) {

			
			stringstream damageVal3;
			myEngine->Timer();
			damageVal3 << damage << endl;
			myFont->Draw(damageVal3.str(), 1200, 40, kRed);
			frameTime = myEngine->Timer();

        }







		
		








	
       


         





		




	}

	// Delete the 3D engine now we are finished with it
	myEngine->Delete();

}
