
void FUN_0202b9e4(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 auStack_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_6c [8];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar1 = FUN_0202b6ec(param_1,5);
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1) {
    local_74 = param_5[1];
    local_70 = *param_5;
    FUN_0202bc24(auStack_6c,&local_70,&local_74);
    local_64 = *(undefined4 *)(param_1 + 0x78);
    local_60 = *(undefined4 *)(param_3 + uVar3 * 0x10 + 4);
    local_5c = *(undefined4 *)(param_3 + uVar3 * 0x10);
    FUN_0202b9c8(auStack_34,&local_5c,&local_60,&local_64);
    (**(code **)(**(int **)(iVar1 + 4) + 0x10))
              (*(int **)(iVar1 + 4),auStack_34,&DAT_02093ca4,param_4,auStack_6c,&DAT_02093c2c,
               &DAT_02093c2c,&DAT_02093c2c);
    local_90 = param_5[3];
    local_8c = *param_5;
    FUN_0202bc24(auStack_88,&local_8c,&local_90);
    local_80 = *(undefined4 *)(param_1 + 0x78);
    local_7c = *(undefined4 *)(param_3 + uVar3 * 0x10 + 0xc);
    local_78 = *(undefined4 *)(param_3 + uVar3 * 0x10);
    FUN_0202b9c8(auStack_40,&local_78,&local_7c,&local_80);
    (**(code **)(**(int **)(iVar1 + 4) + 0x10))
              (*(int **)(iVar1 + 4),auStack_40,&DAT_02093ca4,param_4,auStack_88,&DAT_02093c2c,
               &DAT_02093c2c,&DAT_02093c2c);
    local_ac = param_5[3];
    local_a8 = param_5[2];
    FUN_0202bc24(auStack_a4,&local_a8,&local_ac);
    local_9c = *(undefined4 *)(param_1 + 0x78);
    iVar2 = param_3 + uVar3 * 0x10;
    local_98 = *(undefined4 *)(iVar2 + 0xc);
    local_94 = *(undefined4 *)(iVar2 + 8);
    FUN_0202b9c8(auStack_4c,&local_94,&local_98,&local_9c);
    (**(code **)(**(int **)(iVar1 + 4) + 0x10))
              (*(int **)(iVar1 + 4),auStack_4c,&DAT_02093ca4,param_4,auStack_a4,&DAT_02093c2c,
               &DAT_02093c2c,&DAT_02093c2c);
    local_c8 = param_5[1];
    local_c4 = param_5[2];
    FUN_0202bc24(auStack_c0,&local_c4,&local_c8);
    local_b8 = *(undefined4 *)(param_1 + 0x78);
    iVar2 = param_3 + uVar3 * 0x10;
    local_b4 = *(undefined4 *)(iVar2 + 4);
    local_b0 = *(undefined4 *)(iVar2 + 8);
    FUN_0202b9c8(auStack_58,&local_b0,&local_b4,&local_b8);
    (**(code **)(**(int **)(iVar1 + 4) + 0x10))
              (*(int **)(iVar1 + 4),auStack_58,&DAT_02093ca4,param_4,auStack_c0,&DAT_02093c2c,
               &DAT_02093c2c,&DAT_02093c2c);
  }
  return;
}

