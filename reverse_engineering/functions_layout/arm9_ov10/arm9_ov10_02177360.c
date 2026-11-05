
void FUN_02177360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_02004b18(DAT_021a759c + 0x12,param_1);
  FUN_02004b18(DAT_021a759c + 0x52,param_2);
  puVar1 = DAT_021a759c;
  uVar3 = FUN_02054b44();
  *(undefined8 *)(puVar1 + 0xd) = uVar3;
  puVar1[0xc] = 1;
  FUN_021822c4(*DAT_021a759c,DAT_021a759c + 0x12,DAT_021a759c + 0x52,1,0,param_3,0);
  iVar2 = FUN_02177480();
  if (iVar2 == 0) {
    DAT_021a759c[1] = param_4;
  }
  return;
}

