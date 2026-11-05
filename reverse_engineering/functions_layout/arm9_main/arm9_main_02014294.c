
void FUN_02014294(int *param_1,undefined4 param_2)

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
  
                    /* JUS-TAG strings=["Memory allocation failure","vector length error"] */
  FUN_0200f69c(&uStack_30,1);
  if ((uint)param_1[1] < (uint)param_1[2]) {
    iVar1 = *param_1 + param_1[1] * 0xc;
    if (iVar1 != 0) {
      FUN_0200ad00(iVar1,param_2);
    }
    param_1[1] = param_1[1] + 1;
  }
  else {
    FUN_0200f69c(&uStack_2f,1);
    FUN_0200f69c(auStack_2a,1);
    FUN_0204ee48(param_1,1);
    local_1c = param_1 + 2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar2 = FUN_0204ee48(param_1,(param_1[1] + 1) - param_1[2]);
    FUN_0200f69c(&uStack_2e,1);
    if (0x15555555 < uVar2) {
      FUN_02003bd8(s_vector_length_error_0209d908);
      FUN_02001f18();
    }
    iVar1 = jus_AllocDebug(uVar2 * 0xc);
    if (iVar1 == 0) {
      FUN_02003bd8(s_Memory_allocation_failure_0209d87c);
      FUN_02001f18();
    }
    local_18 = param_1[1];
    local_28 = iVar1;
    local_20 = uVar2;
    FUN_0200f69c(&uStack_2d,1);
    iVar1 = local_18 * 0xc + local_28 + local_24 * 0xc;
    if (iVar1 != 0) {
      FUN_0200ad00(iVar1,param_2);
    }
    local_24 = local_24 + 1;
    iVar3 = *param_1;
    iVar1 = param_1[1];
    FUN_0200f69c(&uStack_2c,1);
    iVar1 = FUN_0200d12c(iVar1 * 0xc,0xc);
    local_18 = local_18 - iVar1;
    FUN_02002434(local_18 * 0xc + local_28,iVar3,iVar1 * 0xc);
    FUN_02002488(iVar3,0,iVar1 * 0xc);
    local_24 = local_24 + iVar1;
    FUN_0200f69c(&uStack_2b,1);
    FUN_0204f098(param_1 + 2,&local_20);
    iVar1 = *param_1;
    *param_1 = local_28;
    local_28 = iVar1;
    FUN_0204f098(param_1 + 1,&local_24);
    FUN_0204f02c(&local_28);
  }
  return;
}

