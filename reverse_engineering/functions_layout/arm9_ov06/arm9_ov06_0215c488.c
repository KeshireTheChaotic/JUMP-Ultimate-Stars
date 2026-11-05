
void FUN_0215c488(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0215b158();
  if (iVar2 != 0) {
    FUN_02157450(param_1,10);
    FUN_0215aed0(*(undefined4 *)(param_1 + 0x1a4),6);
    FUN_0215ef48(param_1);
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0x56c) + 0x18) = 0;
    FUN_02078564(*(undefined4 *)(param_1 + 0x1b4),(*(uint *)(DAT_02172960 + 4) & 0x10) != 0);
    FUN_0215ce28(param_1,1);
    FUN_0215f6e4(param_1,0x210010,0);
    iVar2 = FUN_0215ccd4(param_1);
    if (iVar2 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x28) != 0) {
    FUN_0207d418();
  }
  cVar1 = *(char *)(param_1 + 0x1e8);
  *(char *)(param_1 + 0x1e8) = cVar1 + '\x01';
  if (' ' < cVar1) {
    FUN_02157024(param_1);
    FUN_02161888(*(undefined4 *)(param_1 + 0x1b8));
    if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
      *(byte *)(DAT_02172968 + 0x2e) = *(byte *)(DAT_02172968 + 0x2e) & 0xfe;
    }
    FUN_02157450(param_1,0xf);
    FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x20000000);
    FUN_02157494(param_1,0x18,FUN_0215ca44,0,0x10);
  }
  return;
}

