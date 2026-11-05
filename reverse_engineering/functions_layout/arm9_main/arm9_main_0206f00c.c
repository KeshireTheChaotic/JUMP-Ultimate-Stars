
/* JUS-SCENE jus_Scene13_Exit [scene-map] scene table 0209e32c row 13 exit; slot-1 overlay 1 */

void jus_Scene13_Exit(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0206e590(param_1,0,param_3,param_4,param_4);
    return;
  }
  *(int *)(iRam0206f034 + 0x18c) = (int)*(char *)(param_1 + 1);
  return;
}

