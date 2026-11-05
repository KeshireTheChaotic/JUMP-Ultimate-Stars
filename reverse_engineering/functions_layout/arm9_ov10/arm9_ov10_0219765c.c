
void FUN_0219765c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int local_38;
  int local_34;
  uint local_30;
  
  puVar1 = (undefined2 *)(param_6 + param_5 * 2);
  puVar6 = puVar1 + param_5;
  FUN_020517fc(puVar1,0,param_5 << 2);
  iVar2 = thunk_FUN_02197c28(param_2,param_5);
  iVar3 = thunk_FUN_02197c28(param_3,param_5);
  if ((0 < iVar2) && (0 < iVar3)) {
    local_38 = iVar3 + (param_5 - iVar2) + -1;
    if (local_38 < param_5) {
      FUN_02051890(param_2,puVar1 + local_38,iVar2 << 1);
      if (iVar3 < 3) {
        if (iVar3 < 2) {
          local_30 = (uint)*(ushort *)(param_3 + iVar3 * 2 + -2);
          local_34 = 0;
        }
        else {
          iVar2 = param_3 + iVar3 * 2;
          local_30 = (uint)*(ushort *)(iVar2 + -2);
          local_34 = (uint)*(ushort *)(iVar2 + -4) * 0x10000;
        }
      }
      else {
        iVar2 = param_3 + iVar3 * 2;
        local_34 = *(int *)(iVar2 + -6);
        local_30 = (uint)*(ushort *)(iVar2 + -2) +
                   (uint)CARRY4((uint)*(ushort *)(iVar2 + -6),
                                (uint)*(ushort *)(iVar2 + -4) * 0x10000);
      }
      if (local_38 < param_5) {
        puVar4 = puVar6 + iVar3;
        do {
          FUN_02002450(puVar1 + 1,puVar1,(param_5 * 2 + -1) * 2);
          uVar5 = FUN_0200d0c4(*(undefined4 *)(puVar4 + -3),
                               CONCAT22(*puVar4,puVar4[-1]) +
                               (uint)CARRY4((uint)(ushort)puVar4[-3],
                                            (uint)(ushort)puVar4[-2] * 0x10000),local_34,local_30);
          if (0xffff < uVar5) {
            uVar5 = 0xffff;
          }
          while( true ) {
            FUN_021978f4(param_6,param_3,uVar5 & 0xffff,param_5);
            iVar2 = FUN_021979e8(puVar6,param_6,param_5);
            if (-1 < iVar2) break;
            uVar5 = uVar5 - 1;
          }
          FUN_02197a80(puVar6,puVar6,param_6,param_5);
          *puVar1 = (short)uVar5;
          local_38 = local_38 + 1;
        } while (local_38 < param_5);
      }
    }
    else {
      FUN_02051890(param_2,puVar6,param_5 << 1);
    }
  }
  if (param_1 != 0) {
    FUN_02051890(puVar1,param_1,param_5 << 1);
  }
  if (param_4 != 0) {
    FUN_02051890(puVar6,param_4,param_5 << 1);
  }
  return;
}

