
uint * FUN_021658c4(undefined4 param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *local_60;
  undefined1 auStack_5c [36];
  int local_38;
  int local_34;
  
  FUN_0216609c(*(undefined4 *)(DAT_0216e830 + 0x84));
  FUN_02064744(auStack_5c);
  iVar1 = FUN_0206451c(auStack_5c,param_1);
  if (iVar1 == 0) {
    FUN_02055684();
  }
  uVar3 = local_34 - local_38;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
  iVar1 = FUN_02165858(param_1,&DAT_0216c13c,2);
  if (iVar1 == 0) {
    iVar1 = param_3;
  }
  else {
    iVar1 = -4;
  }
  local_60 = (uint *)FUN_02166ba8(uVar3,iVar1);
  FUN_02064430(auStack_5c,local_60,uVar3);
  FUN_020644ec(auStack_5c);
  if (0 < iVar1) {
    return local_60;
  }
  uVar3 = *local_60;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3 >> 8;
  }
  puVar2 = (uint *)FUN_02166ba8(uVar3 >> 8,param_3);
  FUN_020519c8(local_60,puVar2);
  FUN_02166b5c(&local_60);
  return puVar2;
}

