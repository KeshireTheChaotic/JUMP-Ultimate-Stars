
int FUN_021ace90(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 local_75;
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [28];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [28];
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if (param_1[0x4e] == -1) {
    (**(code **)(*param_1 + 0x198))(param_1,0);
  }
  *(undefined1 *)(param_1[0x19] + 0x40) = 1;
  iVar6 = *(int *)(param_1[0x57] + 8);
  iVar1 = *(int *)(iVar6 + 0x24);
  uVar4 = *(uint *)(iVar6 + 0x24);
  uVar3 = iVar1 + 1;
  if (uVar4 < uVar3) {
    uVar3 = uVar3 - uVar4;
    FUN_0200f69c(&uStack_76);
    uVar4 = *(uint *)(iVar6 + 0x28);
    if ((uVar4 < uVar3) || (uVar4 - uVar3 < *(uint *)(iVar6 + 0x24))) {
      iVar5 = *(int *)(iVar6 + 0x24);
      FUN_0200f69c(&uStack_7c,1);
      FUN_021ac6cc(iVar6 + 0x20,(iVar5 + uVar3) - uVar4);
      local_20 = iVar6 + 0x28;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_1c = 0;
      uVar4 = FUN_021ac6cc(iVar6 + 0x20,(*(int *)(iVar6 + 0x24) + uVar3) - *(int *)(iVar6 + 0x28));
      FUN_0200f69c(&uStack_77,1);
      if (0x71c71c7 < uVar4) {
        FUN_02003bd8(s_vector_length_error_021d17e4);
        FUN_02001f18();
      }
      iVar5 = jus_AllocDebug(uVar4 * 0x24);
      if (iVar5 == 0) {
        FUN_02003bd8(s_Memory_allocation_failure_021d05e0);
        FUN_02001f18();
      }
      local_1c = *(int *)(iVar6 + 0x24);
      local_2c = iVar5;
      local_24 = uVar4;
      FUN_0200f69c(&uStack_78,1);
      iVar5 = local_2c + local_1c * 0x24 + local_28 * 0x24;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        FUN_021ac380(auStack_50);
        FUN_021afdf8(local_20,iVar5,auStack_50);
        FUN_021ac3c4(auStack_48);
        local_28 = local_28 + 1;
        iVar5 = iVar5 + 0x24;
      }
      uVar3 = *(uint *)(iVar6 + 0x20);
      uVar4 = uVar3 + *(int *)(iVar6 + 0x24) * 0x24;
      FUN_0200f69c(&uStack_79,1);
      iVar5 = local_2c + local_1c * 0x24;
      while (uVar3 < uVar4) {
        uVar4 = uVar4 - 0x24;
        iVar5 = iVar5 + -0x24;
        FUN_021afdf8(local_20,iVar5,uVar4);
        local_1c = local_1c + -1;
        local_28 = local_28 + 1;
      }
      FUN_0200f69c(&uStack_7a,1);
      FUN_021ac7d8(iVar6 + 0x28,&local_24);
      iVar5 = *(int *)(iVar6 + 0x20);
      *(int *)(iVar6 + 0x20) = local_2c;
      local_2c = iVar5;
      FUN_021ac7d8(iVar6 + 0x24,&local_28);
      FUN_021ac788(&local_2c);
    }
    else {
      FUN_0200f69c(&uStack_7b,1);
      iVar5 = *(int *)(iVar6 + 0x20) + *(int *)(iVar6 + 0x24) * 0x24;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        FUN_021ac380(auStack_74);
        FUN_021afdf8(iVar6 + 0x28,iVar5,auStack_74);
        FUN_021ac3c4(auStack_6c);
        iVar5 = iVar5 + 0x24;
        *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
      }
    }
  }
  else if (uVar3 < uVar4) {
    FUN_021ac1dc(iVar6 + 0x20,uVar4 - uVar3);
  }
  iVar5 = *(int *)(iVar6 + 0x20) + iVar1 * 0x24;
  uVar2 = FUN_021ac358(iVar5 + 8);
  iVar6 = FUN_02004b04(param_2);
  FUN_021ac3ec(iVar5 + 8,0,uVar2,param_2,param_2 + iVar6,local_75);
  *(undefined4 *)(iVar5 + 0x18) = param_3;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1[0x57] + 8) + 0x20) + iVar1 * 0x24 + 0x1c) = 1;
  (**(code **)(*param_1 + 400))();
  (**(code **)(*param_1 + 0x178))();
  return iVar1;
}

