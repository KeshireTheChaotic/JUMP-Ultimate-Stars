
undefined4 FUN_02193294(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = OS_DisableInterrupts();
  uVar2 = DAT_021a8554;
  uVar1 = DAT_021a8550;
  DAT_021a8550 = 0;
  DAT_021a8554 = 0;
  uVar4 = FUN_0218df48(param_1);
  DAT_021a8550 = uVar1;
  DAT_021a8554 = uVar2;
  OS_RestoreInterrupts(uVar3);
  return uVar4;
}

