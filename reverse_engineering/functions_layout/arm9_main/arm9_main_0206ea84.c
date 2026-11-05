
/* JUS-SCENE jus_Scene05_Exit [scene-map] scene table 0209e32c row 5 exit; slot-1 overlay 2 */

void jus_Scene05_Exit(char *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 1) {
    cVar1 = param_1[1];
  }
  else {
    cVar1 = *param_1;
  }
  *(int *)(iRam0206eaa0 + 0x18c) = (int)cVar1;
  return;
}

