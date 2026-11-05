
void FUN_02156010(int param_1)

{
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  if (*(int *)(param_1 + 0xb4) == 0) {
    func_0x0219b1c4(0);
    func_0x0219ae88();
    return;
  }
  func_0x0219af04();
  return;
}

