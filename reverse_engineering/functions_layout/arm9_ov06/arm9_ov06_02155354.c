
int * FUN_02155354(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6)

{
  int *piVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  FUN_0202b3c8(0x40);
  piVar1 = (int *)FUN_02151294();
  (**(code **)(*piVar1 + 0x50))(piVar1,param_1,0);
  *(undefined1 *)(*(int *)(piVar1[1] + 100) + 0x28) = 1;
  local_18 = param_5 << 0xc;
  FUN_021512bc(piVar1,&local_18);
  local_20 = param_4 << 0xc;
  local_1c = param_3 << 0xc;
  FUN_021519d0(piVar1,&local_1c,&local_20);
  (**(code **)(*(int *)piVar1[1] + 0xd8))((int *)piVar1[1],0);
  (**(code **)(*(int *)piVar1[1] + 0x94))((int *)piVar1[1],param_6);
  return piVar1;
}

