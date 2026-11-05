
void FUN_021c12d8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021d5280 == 0) {
    DAT_021d5280 = param_1;
    FUN_021c12b8(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    uVar2 = param_2 - 0xe4U & 0xfffffffc;
    FUN_02053528(param_1,0x21c1339,param_1,param_1 + 0xe4 + uVar2,uVar2,0);
    FUN_020531dc(param_1);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

