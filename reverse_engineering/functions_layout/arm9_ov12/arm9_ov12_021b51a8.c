
void FUN_021b51a8(int param_1)

{
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  if (DAT_021d5158 != param_1) {
    DAT_021d5158 = param_1;
    if (DAT_021d5148 == (int *)0x0) {
      ALWidgetBase::CreatePointingDeviceNode();
    }
    (**(code **)(*DAT_021d5148 + 0xd4))(DAT_021d5148,param_1);
  }
  return;
}

