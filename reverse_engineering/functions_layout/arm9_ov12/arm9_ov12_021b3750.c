
void FUN_021b3750(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_021b3a28(param_1,1,param_3,param_4,param_4);
  while ((param_1 != local_c && (iVar2 = FUN_021b3a14(param_1[2] & 0xfffffffe), iVar2 == 1))) {
    puVar1 = (uint *)(param_1[2] & 0xfffffffe);
    uVar3 = *(uint *)(puVar1[2] & 0xfffffffe);
    if (puVar1 == (uint *)uVar3) {
      uVar3 = ((uint *)(puVar1[2] & 0xfffffffe))[1];
      if ((uVar3 == 0) || ((*(uint *)(uVar3 + 8) & 1) == 0)) {
        if (param_1 == (uint *)puVar1[1]) {
          FUN_021b3934(puVar1,&local_c);
          param_1 = puVar1;
        }
        FUN_021b3a28(param_1[2] & 0xfffffffe,0);
        FUN_021b3a28(*(uint *)((param_1[2] & 0xfffffffe) + 8) & 0xfffffffe,1);
        FUN_021b39a4(*(uint *)((param_1[2] & 0xfffffffe) + 8) & 0xfffffffe,&local_c);
      }
      else {
        FUN_021b3a28(puVar1,0);
        FUN_021b3a28(uVar3,0);
        param_1 = (uint *)(*(uint *)((param_1[2] & 0xfffffffe) + 8) & 0xfffffffe);
        FUN_021b3a28(param_1,1);
      }
    }
    else if ((uVar3 == 0) || ((*(uint *)(uVar3 + 8) & 1) == 0)) {
      if (param_1 == (uint *)*puVar1) {
        FUN_021b39a4(puVar1,&local_c);
        param_1 = puVar1;
      }
      FUN_021b3a28(param_1[2] & 0xfffffffe,0);
      FUN_021b3a28(*(uint *)((param_1[2] & 0xfffffffe) + 8) & 0xfffffffe,1);
      FUN_021b3934(*(uint *)((param_1[2] & 0xfffffffe) + 8) & 0xfffffffe,&local_c);
    }
    else {
      FUN_021b3a28(puVar1,0);
      FUN_021b3a28(uVar3,0);
      param_1 = (uint *)(*(uint *)((param_1[2] & 0xfffffffe) + 8) & 0xfffffffe);
      FUN_021b3a28(param_1,1);
    }
  }
  FUN_021b3a28(local_c,0);
  return;
}

