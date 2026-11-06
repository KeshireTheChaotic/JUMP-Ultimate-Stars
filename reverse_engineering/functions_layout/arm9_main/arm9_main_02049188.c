
void FUN_02049188(undefined4 param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uStack_2c;
  
  uVar1 = *DAT_020a0cc0;
  puVar2 = DAT_020a0cc0 + 9;
  uStack_2c = param_1;
  DAT_020a0cc0 = &uStack_2c;
  (*(code *)(*puVar2 & 0xfffffffc))(uVar1);
  return;
}

