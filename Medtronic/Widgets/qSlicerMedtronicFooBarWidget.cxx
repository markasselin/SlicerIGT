/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerMedtronicFooBarWidget.h"
#include "ui_qSlicerMedtronicFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_Medtronic
class qSlicerMedtronicFooBarWidgetPrivate
  : public Ui_qSlicerMedtronicFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerMedtronicFooBarWidget);
protected:
  qSlicerMedtronicFooBarWidget* const q_ptr;

public:
  qSlicerMedtronicFooBarWidgetPrivate(
    qSlicerMedtronicFooBarWidget& object);
  virtual void setupUi(qSlicerMedtronicFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerMedtronicFooBarWidgetPrivate
::qSlicerMedtronicFooBarWidgetPrivate(
  qSlicerMedtronicFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerMedtronicFooBarWidgetPrivate
::setupUi(qSlicerMedtronicFooBarWidget* widget)
{
  this->Ui_qSlicerMedtronicFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerMedtronicFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerMedtronicFooBarWidget
::qSlicerMedtronicFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerMedtronicFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerMedtronicFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerMedtronicFooBarWidget
::~qSlicerMedtronicFooBarWidget()
{
}
