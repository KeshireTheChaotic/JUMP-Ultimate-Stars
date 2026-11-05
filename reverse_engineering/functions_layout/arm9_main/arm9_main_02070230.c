
/* JUS-SCENE jus_Scene37_Exit [scene-map] scene table 0209e32c row 37 exit; slot-1 overlay 7 */

void jus_Scene37_Exit(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 == 0) || (param_2 != 1)) {
    func_0x0206e590(param_1,0,param_3,param_4,param_4);
    return;
  }
  *(int *)(iRam02070260 + 0x18c) = (int)*param_1;
  return;
}

