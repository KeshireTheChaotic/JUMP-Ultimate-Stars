
/* JUS-SCENE jus_Scene09_Exit [scene-map] scene table 0209e32c row 9 exit; slot-1 overlay 5 */

void jus_Scene09_Exit(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = iRam0206eca4;
  uVar2 = param_2 >> 8 & 0xff;
  if ((uVar2 == 0) || (uVar2 != 1)) {
    func_0x0206e590(param_1,0,param_3,param_4,param_4);
  }
  else {
    *(undefined1 *)(iRam0206eca0 + 0x6e) = 0;
    *(undefined4 *)(iVar1 + 0x18c) = 0xb;
  }
  iVar1 = iRam0206eca4;
  *(int *)(param_1 + 4) = param_2;
  *(undefined1 *)(iVar1 + 0x17) = 0;
  return;
}

