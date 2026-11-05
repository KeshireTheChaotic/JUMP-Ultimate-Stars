
void FUN_02068bb8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_020673ec(0x10);
  if (param_1 == 3) {
    uVar3 = FUN_02054b44();
    *(undefined8 *)(iVar1 + 0xcb0) = uVar3;
    FUN_02068724(0x21a3630,0x21a3638,(int)*(char *)(iVar1 + 0xd11),0x200000);
    return;
  }
  if (param_1 == 4) {
    uVar3 = FUN_02054b44();
    *(undefined8 *)(iVar1 + 0xcb0) = uVar3;
    iVar2 = (uint)*(byte *)(iVar1 + 0xd0f) * 0xc0;
    FUN_02068724(iVar1 + 0x474 + iVar2,iVar1 + 0x47c + iVar2,*(ushort *)(iVar1 + iVar2 + 0x4a6) - 1,
                 0x300000);
    return;
  }
  if (param_1 == 5) {
    uVar3 = FUN_02054b44();
    *(undefined8 *)(iVar1 + 0xcb0) = uVar3;
    FUN_02068724(0x21a3630,iVar1 + 0x304 + (uint)*(byte *)(iVar1 + 0xd0f) * 0x24,
                 (int)*(char *)(iVar1 + 0xd11),0x300000);
    return;
  }
  return;
}

