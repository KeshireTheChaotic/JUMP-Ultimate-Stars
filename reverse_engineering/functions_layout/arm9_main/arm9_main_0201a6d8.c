
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a6d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0201a548();
  iVar3 = (param_2 + 7U >> 3) - 1;
  if (*(int *)(param_1 + iVar3 * 4 + 0x418) == 0) {
    iVar1 = param_1 + iVar3 * 0x20;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_0201af54(iVar1,param_1);
    }
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x418) = uVar2;
  }
  FUN_0201b078(*(undefined4 *)(param_1 + iVar3 * 4 + 0x418));
  if (DAT_020a0c35 != '\0') {
    _DAT_04000208 = *(undefined2 *)(param_1 + 0x49c);
  }
  return;
}

