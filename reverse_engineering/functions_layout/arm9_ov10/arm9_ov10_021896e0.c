
void FUN_021896e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_02189984(param_1,s_setpdr_021a6524);
  uVar1 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a652c);
  uVar2 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a6530);
  uVar3 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a6534);
  uVar4 = FUN_02005f14();
  iVar5 = FUN_021898c4(2,uVar3,uVar2);
  if (iVar5 != -1) {
    FUN_02189548(iVar5,uVar1,uVar4,0,0);
  }
  return;
}

