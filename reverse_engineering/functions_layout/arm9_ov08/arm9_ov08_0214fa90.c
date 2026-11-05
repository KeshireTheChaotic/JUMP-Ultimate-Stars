
undefined4 FUN_0214fa90(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  DAT_0216d10c = param_3;
  if (param_2 == 0) {
    FUN_020517fc(DAT_0216d124,0,0x50);
  }
  else {
    FUN_02051890(param_2,DAT_0216d124,0x50);
  }
  MIi_CpuCopy32(param_1,DAT_0216d120,0xc0);
  iVar2 = FUN_0214fd8c();
  if (iVar2 == 1) {
    DAT_0216d118 = 8;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  if ((DAT_0216d118 == 3) &&
     (iVar2 = func_0x02198f54(DAT_0216d120,DAT_0216d124,DAT_0216d10c), iVar2 == 3)) {
    DAT_0216d118 = 8;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

