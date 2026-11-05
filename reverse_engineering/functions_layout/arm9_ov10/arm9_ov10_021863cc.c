
undefined4 FUN_021863cc(undefined4 param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (int)param_2 >> 0x18 & 0xff;
  uVar3 = (int)param_2 >> 0x10 & 0xff;
  param_2 = param_2 & 0xffff;
  iVar1 = FUN_0218643c(uVar2,uVar3,param_2);
  if (iVar1 == 0) {
    FUN_02002068(s_gpiIsValidDate_d__m__y__021a5bdc,s_gpiInfo_c_021a5b98,0,0xb7);
  }
  iVar1 = FUN_0218643c(uVar2,uVar3,param_2);
  if (iVar1 == 0) {
    FUN_0218912c(param_1,s_Invalid_date__021a5bf4);
    return 2;
  }
  *param_3 = uVar2;
  *param_4 = uVar3;
  *param_5 = param_2;
  return 0;
}

