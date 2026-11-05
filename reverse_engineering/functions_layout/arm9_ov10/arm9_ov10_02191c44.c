
int FUN_02191c44(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_02191bdc();
  uVar2 = OS_DisableInterrupts();
  iVar3 = (**(code **)(DAT_021a9d20 + 0x18))(uVar1);
  if (iVar3 != 0) {
    FUN_020517fc(iVar3,0,uVar1);
    FUN_02191ad8(iVar3,param_1);
    FUN_021934fc(iVar3);
  }
  OS_RestoreInterrupts(uVar2);
  return iVar3;
}

