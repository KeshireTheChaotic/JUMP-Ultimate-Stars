
void FUN_02189850(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_02189984(param_1,s_pauthr_021a655c);
  iVar1 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a6530);
  uVar2 = FUN_02005f14();
  uVar3 = FUN_02189984(param_1,s_errmsg_021a6564);
  iVar4 = FUN_021898c4(0,uVar2,0);
  if (iVar4 != -1) {
    iVar5 = FUN_020012d8(DAT_021a7d30,iVar4);
    *(int *)(iVar5 + 8) = iVar1;
    FUN_02189548(iVar4,0 < iVar1,0,uVar3,0);
  }
  return;
}

