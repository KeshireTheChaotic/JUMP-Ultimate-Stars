
bool FUN_03800858(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  do {
    iVar2 = FUN_03801770(param_1,iVar3);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x28) != 0)) {
      iVar2 = FUN_038008d8(iVar2,param_1,iVar3,param_2);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      else {
        FUN_038016fc(param_1,iVar3);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return !bVar1;
}

