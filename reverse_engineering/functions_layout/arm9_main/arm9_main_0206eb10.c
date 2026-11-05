
/* JUS-SCENE jus_Scene07_Create [scene-map] scene table 0209e32c row 7 create; slot-1 overlay 1 */

void jus_Scene07_Create(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0206e5f4();
  if (iVar2 != 0) {
    *(undefined1 *)(iRam0206eb60 + 0x14) = 0;
  }
  if (*(char *)(iRam0206eb60 + 0x14) == '\0') {
    func_0x02161f3c(*(uint *)(iRam0206eb60 + 0x58) & 0xff);
    return;
  }
  uVar1 = *(undefined1 *)(iRam0206eb64 + *(uint *)(iRam0206eb60 + 0x58));
  *(undefined1 *)(iRam0206eb60 + 0x14) = 0;
  func_0x02161f3c(uVar1);
  return;
}

