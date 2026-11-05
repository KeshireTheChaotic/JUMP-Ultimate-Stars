
/* JUS-SCENE jus_Scene02_Exit [scene-map] scene table 0209e32c row 2 exit; slot-1 overlay 0 */

void jus_Scene02_Exit(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined4 *)(iRam0206e6e4 + 0x18c) = 1;
    }
    return;
  }
  uVar1 = FUN_02054b44();
  FUN_02030f24(*(undefined4 *)(*piRam0206e6e8 + 4),uVar1);
  iVar2 = FUN_02070518();
  if (iVar2 == 0) {
    *(undefined4 *)(iRam0206e6e4 + 0x18c) = 3;
    return;
  }
  FUN_0206e524(1,0xe,3,0xffffffff,0);
  return;
}

