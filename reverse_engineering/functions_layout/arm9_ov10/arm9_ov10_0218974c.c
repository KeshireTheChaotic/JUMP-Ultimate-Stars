
void FUN_0218974c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  FUN_02189984(param_1,s_getpdr_021a6538);
  uVar1 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a6530);
  uVar2 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a652c);
  uVar3 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a6534);
  uVar4 = FUN_02005f14();
  iVar5 = FUN_021898c4(1,uVar2,uVar3);
  if (iVar5 != -1) {
    FUN_02189984(param_1,s_length_021a6540);
    uVar2 = FUN_02005f14();
    iVar6 = FUN_02004d40(param_1,s__data__021a6548);
    if (iVar6 == 0) {
      uVar2 = 0;
      puVar7 = &DAT_021a6550;
    }
    else {
      puVar7 = (undefined *)(iVar6 + 6);
    }
    FUN_02189548(iVar5,uVar1,uVar4,puVar7,uVar2);
  }
  return;
}

