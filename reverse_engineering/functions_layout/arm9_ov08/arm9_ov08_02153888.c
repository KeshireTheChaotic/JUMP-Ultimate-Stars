
undefined4 FUN_02153888(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  DAT_0216d1a8 = param_3;
  if (param_2 == 0) {
    FUN_020517fc(DAT_0216d178,0,0x60);
  }
  else {
    FUN_02051890(param_2,DAT_0216d178,0x60);
  }
  MIi_CpuCopy32(param_1,DAT_0216d19c,0xc0);
  iVar2 = FUN_02153b38();
  if (iVar2 == 1) {
    DAT_0216d17c = 8;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  if ((DAT_0216d17c == 3) &&
     (iVar2 = func_0x02198f54(DAT_0216d19c,DAT_0216d178,DAT_0216d1a8), iVar2 == 3)) {
    DAT_0216d17c = 8;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

