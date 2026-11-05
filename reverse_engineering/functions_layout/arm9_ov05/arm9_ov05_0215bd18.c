
void FUN_0215bd18(int param_1,int param_2)

{
  int *piVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x4ee) = 0;
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x18c) + 4),1);
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x18c) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x18c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    local_18 = 0;
    local_14 = 0;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x18c),&local_14,&local_18);
  }
  else {
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x18c) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x18c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    local_10 = 0;
    local_c = 0x100000;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x18c),&local_c,&local_10);
  }
  return;
}

