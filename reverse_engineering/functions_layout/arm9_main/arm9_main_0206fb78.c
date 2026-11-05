
/* JUS-SCENE jus_Scene29_Exit [scene-map] scene table 0209e32c row 29 exit; slot-1 overlay 5 */

void jus_Scene29_Exit(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == -1) {
    FUN_0206e590(param_1,0,param_3,0xffffffff,param_4);
  }
  else {
    FUN_0206e524(1,0x1e,0x1d,0xffffffff,param_2);
    *(int *)(param_1 + 4) = param_2;
  }
  *(undefined1 *)(iRam0206fbc4 + 0x17) = 0;
  return;
}

