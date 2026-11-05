
void FUN_021ae4c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 auStack_2a [2];
  int local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  
  FUN_0200f69c(auStack_2a,1);
  uVar2 = param_1[1];
  if (uVar2 < (uint)param_1[2]) {
    param_1[1] = uVar2 + 1;
    *(undefined4 *)(*param_1 + uVar2 * 4) = *param_2;
  }
  else {
    FUN_0200f69c(&uStack_2b,1);
    FUN_0200f69c(&uStack_30,1);
    FUN_021b032c(param_1,1);
    local_1c = param_1 + 2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar2 = FUN_021b032c(param_1,(param_1[1] + 1) - param_1[2]);
    FUN_0200f69c(&uStack_2c,1);
    if (0x3fffffff < uVar2) {
      FUN_02003bd8(s_vector_length_error_021d17e4);
      FUN_02001f18();
    }
    iVar1 = jus_AllocDebug(uVar2 << 2);
    if (iVar1 == 0) {
      FUN_02003bd8(s_Memory_allocation_failure_021d17b8);
      FUN_02001f18();
    }
    local_18 = param_1[1];
    local_28 = iVar1;
    local_20 = uVar2;
    FUN_0200f69c(&uStack_2d,1);
    *(undefined4 *)(local_24 * 4 + local_28 + local_18 * 4) = *param_2;
    local_24 = local_24 + 1;
    iVar1 = param_1[1];
    iVar3 = *param_1;
    FUN_0200f69c(&uStack_2e,1);
    iVar1 = (int)(iVar1 * 4 + ((uint)(iVar1 * 4 >> 1) >> 0x1e)) >> 2;
    local_18 = local_18 - iVar1;
    FUN_02002434(local_28 + local_18 * 4,iVar3,iVar1 * 4);
    FUN_02002488(iVar3,0,iVar1 * 4);
    local_24 = local_24 + iVar1;
    FUN_0200f69c(&uStack_2f,1);
    param_1[1] = 0;
    FUN_021ac7d8(param_1 + 2,&local_20);
    iVar1 = *param_1;
    *param_1 = local_28;
    local_28 = iVar1;
    FUN_021ac7d8(param_1 + 1,&local_24);
    FUN_021b03e4(&local_28);
  }
  return;
}

