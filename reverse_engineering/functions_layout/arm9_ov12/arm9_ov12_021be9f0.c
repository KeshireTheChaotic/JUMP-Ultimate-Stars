
undefined4 FUN_021be9f0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (param_2 < 4) {
    uVar1 = (*(code *)((int)&switchD_021bea0e::switchdataD_021bea10 +
                      (int)(short)(&switchD_021bea0e::switchdataD_021bea10)[param_2]))();
    return uVar1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

