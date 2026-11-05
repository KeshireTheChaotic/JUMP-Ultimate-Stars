
void FUN_02169b3c(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 == 0) {
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4),1);
    func_0x021b7170(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x48) + 4));
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 4));
    local_10 = 0x100000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x4c),&local_10);
  }
  else {
    func_0x021b65d8();
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x48) + 4));
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 4));
    local_c = 0;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x4c),&local_c);
  }
  return;
}

