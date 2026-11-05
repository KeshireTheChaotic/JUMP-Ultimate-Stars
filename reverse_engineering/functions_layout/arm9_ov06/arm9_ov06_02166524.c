
void FUN_02166524(uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  short local_2c;
  short local_2a;
  undefined2 local_28;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  puVar1 = (undefined4 *)FUN_0208369c(9);
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    uVar2 = *(uint *)(puVar1[2] + 0x2c);
    if (((((uVar2 & 1) == 0) && ((uVar2 & 8) == 0)) &&
        (iVar3 = *(int *)(puVar1[2] + 0x10), param_1 != (*(uint *)(iVar3 + 0x34) & 0xf))) &&
       ((((*(uint *)(iVar3 + 0x38) & 0x800) == 0 && ((param_1 & *(uint *)(iVar3 + 0x3c) & 0xf) == 0)
         ) && (*(int *)(iVar3 + 0x17c) != 0)))) {
      iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
      iVar5 = *(int *)(DAT_02172988 + 0x154);
      uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
      if (iVar5 != 0) {
        uVar6 = *(undefined4 *)(iVar5 + 8);
        FUN_02037c24(DAT_02172988 + 0x154,iVar5);
        FUN_02037b98(DAT_02172988 + 0x15c,iVar5);
        FUN_020517fc(&local_38,0,0x14);
        local_2c = 0;
        local_2a = 0;
        local_28 = 0x4e;
        local_38 = uVar6;
        local_34 = uVar7;
        local_30 = iVar4;
        iVar3 = FUN_02083624(BattleMapItem::BattleMapItemInit,&local_38,param_1,param_1 | 0x8afc200,
                             0);
        if (iVar3 != 0) {
          *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x6c) = *(undefined4 *)(DAT_02172988 + 0x20);
          FUN_02165088(iVar3,1);
          FUN_021650b4(iVar3,1);
          FUN_021650a4(iVar3,0x14);
          if (iVar3 != 0) {
            FUN_0207a878(*(undefined4 *)(iVar3 + 0x14));
          }
          FUN_02165d10(iVar3,1);
          FUN_0207d11c(*(undefined4 *)(iVar3 + 0x10),1);
          FUN_02165074(iVar3,(int)local_2c,(int)local_2a);
          iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
          *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar4 + 0xc);
          *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar4 + 0xc) = local_34;
          *(int *)(iVar4 + 0x10) = local_30;
          *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 0x100;
          iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
          *(undefined4 *)(iVar4 + 0xc) = local_34;
          *(int *)(iVar4 + 0x10) = local_30 + -0x5000;
          iVar4 = *(int *)(iVar3 + 0xc);
          FUN_02023894(*(undefined4 *)(iVar4 + 4),param_2 + 0x50000d,0);
          (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
          iVar4 = *(int *)(iVar3 + 0x30);
          *(undefined2 *)(iVar4 + 0x20) = 10;
          *(code **)(iVar4 + 0x10) = FUN_02166a30;
          *(char *)(iVar4 + 0x22) = (char)param_2;
          *(int *)(iVar4 + 0x1c) = param_2 + 0x50000d;
          *(int *)(iVar4 + 0xc) = DAT_02172988;
          FUN_0207ce7c(*(undefined4 *)(iVar3 + 0x10),0x10000000);
        }
      }
    }
  }
  return;
}

