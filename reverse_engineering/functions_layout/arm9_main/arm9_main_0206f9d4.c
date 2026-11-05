
/* JUS-SCENE jus_Scene26_Exit [scene-map] scene table 0209e32c row 26 exit; slot-1 overlay 3 */

void jus_Scene26_Exit(char *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = iRam0206faa4;
  switch(param_2 >> 0x18) {
  case 0:
    break;
  case 1:
    if (*(int *)(param_1 + 4) == 0x13) {
      *(int *)(iRam0206faa0 + 0x18c) = (int)param_1[1];
      return;
    }
    *(undefined1 *)(iRam0206faa4 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
    *(undefined4 *)(iRam0206faa0 + 0x18c) = 0xc;
    return;
  case 2:
    break;
  case 3:
    func_0x0207231c(*(undefined1 *)(iRam0206faa0 + 0x11));
    func_0x020703c8(*(undefined1 *)(iRam0206faa0 + 0x11),0);
    func_0x0206e5b0(param_1,0);
    return;
  case 4:
    func_0x0206e590(param_1,0);
    return;
  }
  if (*(int *)(param_1 + 4) == 0x13) {
    func_0x0206e5b0(param_1,0);
    return;
  }
  *(int *)(iRam0206faa0 + 0x18c) = (int)*param_1;
  return;
}

