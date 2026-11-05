
int FUN_021ba0b0(int param_1,int ***param_2,undefined4 param_3,undefined4 param_4)

{
  int ***pppiVar1;
  int iVar2;
  int ***pppiVar3;
  uint uVar4;
  int **local_20;
  int ***local_1c;
  int ***local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  uStack_8 = param_3;
  local_c = param_2;
  uVar4 = *(uint *)(param_1 + 8);
  if ((int ***)(0x1fffffff - uVar4) < param_2) {
    FUN_02003bd8(s_vector_length_error_021d3dd4);
    FUN_02001f18();
  }
  if (uVar4 < 0xaaaaaaa) {
    local_1c = (int ***)FUN_0200d338((uVar4 + 1) * 3,5);
    if (local_1c < local_c) {
      pppiVar1 = (int ***)&local_c;
    }
    else {
      pppiVar1 = (int ***)&local_1c;
    }
    iVar2 = uVar4 + (int)*pppiVar1;
  }
  else if (uVar4 < 0x15555554) {
    pppiVar1 = (int ***)(uVar4 + 1 >> 1);
    pppiVar3 = local_c;
    if (pppiVar1 < local_c) {
      pppiVar3 = (int ***)&local_c;
    }
    local_20 = (int **)(uVar4 + 1 >> 1);
    if (local_c <= pppiVar1) {
      pppiVar3 = &local_20;
    }
    iVar2 = uVar4 + (int)*pppiVar3;
  }
  else {
    iVar2 = 0x1fffffff;
  }
  return iVar2;
}

