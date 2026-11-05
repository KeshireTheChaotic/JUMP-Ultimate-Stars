
int FUN_02161334(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  
  iVar2 = 2;
  do {
    FUN_021612b4(iVar2,auStack_18);
    iVar1 = FUN_02166dbc(auStack_18);
    if (iVar1 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return 0;
}

