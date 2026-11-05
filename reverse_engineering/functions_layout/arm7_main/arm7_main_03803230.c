
undefined4 FUN_03803230(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = OS_DisableInterrupts();
  uVar1 = DAT_03809d70;
  DAT_03809d70 = param_1;
  FUN_037fc270(&DAT_03809cc8,param_1);
  OS_RestoreInterrupts(uVar2);
  return uVar1;
}

