
void FUN_02161d94(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (*(int **)(param_1 + 4))[4];
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  *(undefined1 *)(iVar2 + 0xaf) = uVar1;
  if (*(char *)(iVar2 + 0xaf) == -1) {
    return;
  }
  if ((*(byte *)(iVar2 + 0xb2) & 7) >> 2 == 0) {
    func_0x021c3430(*(undefined4 *)(iVar2 + 0x30),
                    *(undefined1 *)(iVar2 + *(char *)(iVar2 + 0xaf) + 0x88));
  }
  FUN_02161e18(*(undefined1 *)(iVar2 + *(char *)(iVar2 + 0xaf) + 0x88));
  return;
}

