
void FUN_0217f900(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = FUN_0217f950(param_2 + 1,0x5c);
  while (iVar1 != 0) {
    puVar2 = (undefined *)FUN_0217f950(0,0x5c);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_021a4c9c;
    }
    iVar3 = FUN_0217f994(iVar1);
    if (iVar3 != 0) {
      FUN_0217fb10(param_1,iVar1,puVar2);
    }
    iVar1 = FUN_0217f950(0,0x5c);
  }
  return;
}

