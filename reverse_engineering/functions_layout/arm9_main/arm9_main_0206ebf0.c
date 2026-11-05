
/* JUS-SCENE jus_Scene08_Exit [scene-map] scene table 0209e32c row 8 exit; slot-1 overlay 5 */

void jus_Scene08_Exit(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    *(int *)(iRam0206ec14 + 0x18c) = (int)*(char *)(param_1 + 1);
    return;
  }
  func_0x0206e5b0(param_1,0,param_3,param_4,param_4);
  return;
}

