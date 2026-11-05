
void FUN_021539d4(int param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  short *psStack_28;
  
  psStack_28 = param_4;
  FUN_021518d4(&local_34);
  *(short *)(param_1 + 0x354) = *param_4;
  *(short *)(param_1 + 0x356) = param_4[1];
  FUN_02156b74(*(undefined4 *)(param_1 + 0x338),*(undefined4 *)param_4,
               *(undefined4 *)(param_1 + 0x358));
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 0x35f); iVar1 = iVar1 + 1) {
    iVar2 = *(int *)(iVar1 * 0x28 + param_1 + 0xd8);
    iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x124) * 0x48 +
            *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    local_38 = ((int)*(short *)(iVar3 + 0x2c) - (int)*param_4) * 0x1000;
    FUN_02153260(&local_38,param_3);
    local_34 = local_38;
    local_3c = ((int)*(short *)(iVar3 + 0x2e) - (int)param_4[1]) * 0x1000;
    FUN_02153260(&local_3c,param_3);
    local_30 = local_3c;
    FUN_0214f960(iVar2,&local_34);
  }
  iVar1 = FUN_02151454(*(undefined4 *)(param_1 + 8),0x564d5049,0);
  FUN_0214f9a4(&local_48,*(undefined4 *)(param_1 + 8));
  local_44 = local_48 - *(int *)(param_1 + 0x34c);
  local_40 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x50) + 0xc) -
             *(int *)(param_1 + 0x348);
  FUN_0214d4c0(*(undefined4 *)(param_1 + 8),&local_40,&local_44);
  FUN_02013c48(*(undefined4 *)(iVar1 + 4),&DAT_02093c8c,0);
  return;
}

