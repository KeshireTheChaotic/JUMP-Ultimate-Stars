
int * FUN_02075f08(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["bin/koma.bin"] */
  piVar1 = (int *)ALStreamImp::Create(s_bin_koma_bin_0209f594);
  uVar2 = (**(code **)(*(int *)piVar1[1] + 0x2c))((int *)piVar1[1],0);
  *param_1 = uVar2;
  uVar2 = (**(code **)(*piVar1 + 0x10))();
  uVar2 = FUN_0200d338(uVar2,0xc);
  *param_2 = uVar2;
  return piVar1;
}

