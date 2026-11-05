
/* JUS-SCENE jus_Scene19_Exit [scene-map] scene table 0209e32c row 19 exit; slot-1 overlay 1 */

void jus_Scene19_Exit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_4;
  if (*(char *)(iRam0206f3a4 + 8) != '\0') {
    iVar2 = (int)*(char *)(iRam0206f3a4 + 4);
    uVar1 = 0xffffffff;
    if (iVar2 != -1) {
      if (*(char *)(iRam0206f3a4 + 6) == '\0') {
        FUN_0206e524(1,0xe,0x10,0xffffffff,iVar2);
        return;
      }
      FUN_0206e524(1,0xe,0x14,0xffffffff,iVar2);
      FUN_0206e524(0,0x14,3,0xffffffff,0);
      return;
    }
    if (*(char *)(iRam0206f3a4 + 6) != '\0') {
      FUN_0206e524(1,0x14,3,0xffffffff,0);
      return;
    }
  }
  FUN_0206e574(0x10,0,param_3,uVar1,param_4);
  return;
}

