
void FUN_0215fc54(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  cVar2 = DAT_0216e7bc;
  iVar6 = (int)DAT_0216e7bc;
  iVar3 = FUN_02157004(1);
  cVar1 = *(char *)(param_1 + iVar6 * 4 + iVar3 * 0x10 + 0x216ac78);
  if (cVar1 != -1) {
    if (cVar1 == '\0') {
      DAT_0216e7b8 = cVar2;
    }
    if (cVar1 == -2) {
      DAT_0216e7bc = DAT_0216e7b8;
    }
    else {
      DAT_0216e7bc = cVar1;
    }
    FUN_02162378(8);
    iVar3 = FUN_02157004(1);
    iVar6 = FUN_02157004(1);
    iVar4 = FUN_02157004(1);
    iVar5 = FUN_02157004(1);
    iVar7 = DAT_0216e7bc * 8;
    FUN_021547e4(*(undefined2 *)(&DAT_0216acd8 + iVar7 + iVar3 * 0x20),
                 *(undefined2 *)(&DAT_0216acdc + iVar7 + iVar6 * 0x20),
                 *(undefined2 *)(&DAT_0216acda + iVar7 + iVar4 * 0x20),
                 *(undefined2 *)(&DAT_0216acde + iVar7 + iVar5 * 0x20));
  }
  return;
}

