﻿#ifndef EMOVINGTEXTPLUGIN_H
#define EMOVINGTEXTPLUGIN_H

#include <QObject>
#include "./../../IHmiRunTimeViewPlugin/IHmiRunTimeViewPlugin.h"


class EMovingTextPlugin : public QObject, IHmiRunTimeViewPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID HmiRunTimeViewPluginInterface_iid FILE "EMovingText.json")
    Q_INTERFACES(IHmiRunTimeViewPlugin)

public:
    EMovingTextPlugin();

    /////////////////////<plugin operation>////////////////////////////

    // 初始化
    void initialize() Q_DECL_OVERRIDE;
    // 获取元素名称
    QString getElementName() Q_DECL_OVERRIDE;
    // 获取元素ID
    int getElementID() Q_DECL_OVERRIDE;
    // 获取元素ID String
    QString getElementIDString() Q_DECL_OVERRIDE;
    // 创建元素
    Element* createElement(QWidget *owner=0) Q_DECL_OVERRIDE;

    /////////////////////<plugin operation>////////////////////////////



};

#endif // EMOVINGTEXTPLUGIN_H
