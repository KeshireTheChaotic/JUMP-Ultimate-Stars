
/* JUS-SCENE jus_Scene17_Exit [scene-map] scene table 0209e32c row 17 exit; slot-1 overlay 1 */

void jus_Scene17_Exit(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = *(char *)(iRam0206f2a0 + 3) == -1;
    iVar1 = iRam0206f2a0;
    if (bVar3) {
      iVar1 = (int)*(char *)(iRam0206f2a0 + 5);
    }
    if (bVar3 && iVar1 == -1) {
      uVar2 = 0xc;
    }
    else {
      uVar2 = 0xe;
    }
    iVar1 = func_0x0207060c();
    if (iVar1 == 0) {
      FUN_0206e524(1,4,uVar2,0x11,5);
    }
    else {
      FUN_0206e524(1,5,uVar2,0x11,0);
    }
    if (*(char *)(iRam0206f2a0 + 5) == -1) {
      if (*(char *)(iRam0206f2a0 + 3) != -1) {
        FUN_0206e524(0,0xe,0xc,0xffffffff,(int)*(char *)(iRam0206f2a0 + 3));
      }
    }
    else {
      FUN_0206e524(0,0xe,0x12,0xffffffff,(int)*(char *)(iRam0206f2a0 + 5));
      FUN_0206e524(0,0x12,0xc,0xffffffff,0);
    }
    FUN_0206e524(0,0xc,0x13,0x10,0);
    FUN_0206e524(0,0x13,0x10,0xffffffff,0);
  }
  else if (param_2 == 1) {
    FUN_0207062c();
    FUN_0206e524(1,10,0x13,0xffffffff,0,param_4);
  }
  else if (param_2 == 2) {
    *(int *)(iRam0206f29c + 0x18c) = (int)*param_1;
  }
  return;
}

