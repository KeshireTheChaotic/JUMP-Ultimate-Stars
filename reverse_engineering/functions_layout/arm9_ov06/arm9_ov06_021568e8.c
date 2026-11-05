
void FUN_021568e8(int param_1,int param_2)

{
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    (**(code **)(param_1 + 0x70))
              (param_1,*(undefined4 *)(param_1 + 0x74),(int)*(short *)(param_2 + 2),
               (int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 6),
               (int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10),
               (int)*(short *)(param_2 + 0xc),(int)*(short *)(param_2 + 0xe));
  }
  return;
}

