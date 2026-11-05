
void FUN_0218661c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 3) {
    iVar2 = param_2[1];
    piVar1 = (int *)(*param_1 + 0x210);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      FUN_02002068(s_iconnection_>numSearches_>__0_021a5c60,s_gpiOperation_c_021a5c50,0,0xb6);
    }
    FUN_02001b6c(*(undefined4 *)(iVar2 + 4),2);
    FUN_02001b80(*(undefined4 *)(iVar2 + 4));
    FUN_02175814(*(undefined4 *)(iVar2 + 0x18));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    FUN_02175814(*(undefined4 *)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  FUN_02175814(param_2[1]);
  param_2[1] = 0;
  FUN_02175814(param_2);
  return;
}

